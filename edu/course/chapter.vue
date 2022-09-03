<template>
      <div class="app-container">
        <h2 style="text-align: center;">发布新课程</h2>
        <el-steps :active="2" process-status="wait" align-center style="margin-bottom: 40px;">
          <el-step title="填写课程基本信息"/>
          <el-step title="创建课程大纲"/>
          <el-step title="最终发布"/>
        </el-steps>
    <ul>
      <li v-for="chapter in chapterVideoList " :key="chapter.id">
        {{chapter.title}}
        <ul>
          <li>第一节</li>
          <li>第二节</li>
        </ul>
      </li>
      <li>
        第二章
</li>
    </ul>
        <el-form label-width="120px">
    
          <el-form-item>
            <el-button @click="previous">上一步</el-button>
            <el-button :disabled="saveBtnDisabled" type="primary" @click="next">下一步</el-button>
          </el-form-item>
        </el-form>
      </div>
    </template>
    
    <script>
  import chapter from '@/api/edu/chapter'
    export default {
      data() {
        return {
          saveBtnDisabled: false, // 保存按钮是否禁用
          courseId:'',//课程id
          chapterVideoList:[]
        }
      },
      created() {
        //获取路由的id值
        if(this.$route.params && this.$route.params.Id){
         this.courseId=this.$route.params.id
          //根据课程id获取章节和小结列表
        this.getChapterVideo()
        }
        console.log('chapter created')
        console.log(chapterVideoList)
      },
      methods: {
        //根据课程id获取章节和小结列表
        getChapterVideo(){
          chapter.getAllChapterVideo( this.courseId)
            .then(response=>{
          this.chapterVideoList= response.data.allChapterVideo
          })
        },
        previous() {
          this.$router.push({ path: '/course/info/1' })
        },
        next() {
          console.log('next')
          this.$router.push({ path: '/course/publish/3' })
        }
      }
    }
    </script>