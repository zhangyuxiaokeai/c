package com.atguigu.oss.service.impl;

import com.aliyun.oss.ClientException;
import com.aliyun.oss.OSS;
import com.aliyun.oss.OSSClientBuilder;
import com.aliyun.oss.OSSException;
import com.aliyun.oss.model.PutObjectRequest;
import com.atguigu.oss.service.OssService;
import com.atguigu.oss.utils.ConstantPropertiesUtils;
import org.joda.time.DateTime;
import org.springframework.stereotype.Service;
import org.springframework.web.multipart.MultipartFile;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.util.UUID;

@Service
public class OssServiceImpl implements OssService {
    //上传文件到oss
    @Override
    public String uploadFileAvatar(MultipartFile file) {
        // Endpoint以华东1（杭州）为例，其它Region请按实际情况填写。
        String endpoint = ConstantPropertiesUtils.END_POINT;
        // 阿里云账号AccessKey拥有所有API的访问权限，风险很高。强烈建议您创建并使用RAM用户进行API访问或日常运维，请登录RAM控制台创建RAM用户。
        String accessKeyId = ConstantPropertiesUtils.ACCESS_KEY_ID;
        String accessKeySecret = ConstantPropertiesUtils.ACCESS_KEY_SECRET;
        // 填写Bucket名称，例如examplebucket。
        String bucketName = ConstantPropertiesUtils.BUCKET_NAME;
        // 填写Object完整路径，完整路径中不能包含Bucket名称，例如exampledir/exampleobject.txt。
       // String objectName = "exampledir/exampleobject.txt";
        // 填写本地文件的完整路径，例如D:\\localpath\\examplefile.txt。
        // 如果未指定本地路径，则默认从示例程序所属项目对应本地路径中上传文件。
      //  String filePath= "D:\\localpath\\examplefile.txt";

        String fileName=null;


        // 创建OSSClient实例。
        OSS ossClient = new OSSClientBuilder().build(endpoint, accessKeyId, accessKeySecret);

        try {

            //上传文件输入流
            InputStream inputStream = file.getInputStream();

            //获取文件名称
                fileName = file.getOriginalFilename();
            //1.在文件名称里面添加随机唯一值的值
            String uuid = UUID.randomUUID().toString().replaceAll("-","");
            fileName = uuid + fileName;
            //2.把文件按照日期进行分类
            //2019/11/12/01.jpg
            //获取当前日期
            //2019/11/12
            String datePath = new DateTime().toString("yyyy/MM/dd");
            fileName=datePath+"/"+fileName;



            // 创建PutObjectRequest对象
             //第一个参数Bucket名称
            // 第二个参数  上传oss文件路径和文件名称 /aa/bb/1.jpg
            //第三个参数 上传文件输入流
            PutObjectRequest putObjectRequest = new PutObjectRequest(bucketName, fileName, inputStream);
            // 如果需要上传时设置存储类型和访问权限，请参考以下示例代码。
            // ObjectMetadata metadata = new ObjectMetadata();
            // metadata.setHeader(OSSHeaders.OSS_STORAGE_CLASS, StorageClass.Standard.toString());
            // metadata.setObjectAcl(CannedAccessControlList.Private);
            // putObjectRequest.setMetadata(metadata);

            // 上传文件。
            ossClient.putObject(putObjectRequest);
        } catch (OSSException oe) {
            System.out.println("Caught an OSSException, which means your request made it to OSS, "
                    + "but was rejected with an error response for some reason.");
            System.out.println("Error Message:" + oe.getErrorMessage());
            System.out.println("Error Code:" + oe.getErrorCode());
            System.out.println("Request ID:" + oe.getRequestId());
            System.out.println("Host ID:" + oe.getHostId());
        } catch (ClientException ce) {
            System.out.println("Caught an ClientException, which means the client encountered "
                    + "a serious internal problem while trying to communicate with OSS, "
                    + "such as not being able to access the network.");
            System.out.println("Error Message:" + ce.getMessage());
        } catch (IOException e) {
            e.printStackTrace();
            return null;
        } finally {
            if (ossClient != null) {
                ossClient.shutdown();
            }
            //上传之后文件路径返回
            //需要把上传dao阿里云oss路径手动拼接出来
            //https://edu-zyh.oss-cn-hangzhou.aliyuncs.com/3.jpg
            String url="https://"+bucketName+"."+endpoint+"/"+fileName;
            return url;
        }
    }
    }
