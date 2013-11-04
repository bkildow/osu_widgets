(function ($) {
	Drupal.behaviors.osu_widgetsBehavior = {
	  attach: function (context, settings) {
	  	$('.bxslider', context).once('bxslider', function() {
		  	$(this).bxSlider({
			  minSlides: 2,
			  maxSlides: 5,
			  slideWidth: 250,
			  slideMargin: 10,
			  captions: true
			});
		});
	  }
	};
})(jQuery);
