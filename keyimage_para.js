(function ($) {
	$(document).ready(function(){

		$(window).on('scroll touchmove', function(e) {

			var scrolltop = ($(window).scrollTop());

			var margin = Math.floor(scrolltop / 2);



			/*
			if(navigator.userAgent.match(/iPad/i) != null){
		      var scrolltop = ($("#main-container").scrollTop());
		    }else{
		      var scrolltop = ($(window).scrollTop());
		    }
		    */
			$('.keyimage-para-wrapper img').css("margin-top","-" + margin + "px"); 

		});

	});
})(jQuery);