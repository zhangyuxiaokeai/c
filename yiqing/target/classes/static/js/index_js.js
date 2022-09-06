/* JQ部分 */
$("#yiqing_in").click(function(){
	/* 1:自己的子元素span元素，添加一个class属性，其数据为active */
	$("#yiqing_in span").attr("class","active");
	/* 2：另外一个span元素的classs属性要去掉 */
	$("#yinqing_out span").attr("class","");
})
$("#yinqing_out").click(function(){
	/* 1:自己的子元素span元素，添加一个class属性，其数据为active */
	$("#yiqing_in span").attr("class","");
	/* 2：另外一个span元素的classs属性要去掉 */
	$("#yinqing_out span").attr("class","active");
})

$("#lab_left").click(function(){
	/* 1 被点击的按钮，处于选中状态：添加属性为“lab_left active” */
	$("#lab_left").attr("class","lab_left active");
	/* 2 另外一个变成是未被选中 class=“lab_right” */
	$("#lab_right").attr("class","lab_right");
});
$("#lab_right").click(function(){
	/* 1 被点击的按钮，处于选中状态：添加属性为“lab_right active” */
	$("#lab_right").attr("class","lab_right active");
	/* 2 另外一个变成是未被选中 class=“lab_left” */
	$("#lab_left").attr("class","lab_left");
});




