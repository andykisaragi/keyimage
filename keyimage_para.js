(function ($) {
	$(document).ready(function(){
		$('.keyimage-para-wrapper img').css("position","absolute").css("bottom","0"); 
		$(window).on('scroll touchmove', function(e) {
			var scrolltop = ($(window).scrollTop());
			var margin = Math.floor(scrolltop);
			/*
			if(navigator.userAgent.match(/iPad/i) != null){
		      var scrolltop = ($("#main-container").scrollTop());
		    }else{
		      var scrolltop = ($(window).scrollTop());
		    }
		    */
			//$('.keyimage-para-wrapper img').css("margin-top",(margin / 2) + "px"); 
			$('.keyimage-para-wrapper img').css("bottom","-" + (margin / 2) + "px"); 
		});
	});
})(jQuery);