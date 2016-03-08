// JavaScript Document

			$(document).ready(function(){
		/*首页服务*/	
			var $liCur = $(".nav ul li.cur"),
				  curP = $liCur.position().left,
				  curW = $liCur.width(true),
				  $slider = $(".curBg"),
				  $navBox = $(".nav");
				 $targetEle = $(".nav ul li a"),
				$slider.animate({
				  "left":curP,
				  "width":curW
				});
				$targetEle.mouseenter(function () {
						$(".cur>a").css({"color":"#2A2B2c"});	
					//	$(this).css({"color":"#EDEFEE"});	
				  var $_parent = $(this).parent(),
					_width = $_parent.width(true),
					posL = $_parent.position().left;
				  $slider.stop(true, true).animate({
					"left":posL,
					"width":_width
					
				  }, "fast");
				});
				$navBox.mouseleave(function (cur, wid) {
			$(".cur>a").css({"color":"#FF2000"});		
				cur = curP;
				  wid = curW;
				  $slider.stop(true, true).animate({
					"left":cur,
					"width":wid
				  }, "fast");
				});
		/**/	
		

/*新闻列表动画*/


$(".I_NewList").hover(function(){
							   
			$(this).children("a").animate({left:'6px'},300);		   
	   
							   },function(){
										  
								$(this).children("a").animate({left:'0px'},300);				  
										  
									});
	
	
});