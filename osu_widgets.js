(function ($) {
	Drupal.behaviors.osu_widgetsCarouselBehavior = {
	  attach: function (context, settings) {
	  	$('.bxcarousel', context).once('bxcarousel', function() {
		  	$(this).bxSlider({
			  minSlides: 2,
			  maxSlides: 5,
			  moveSlides: 1,
			  slideWidth: 250,
			  slideMargin: 10,
			  captions: true
			});
		});
	  }
	};

	Drupal.behaviors.osu_widgetsSlideshowBehavior = {
	  attach: function (context, settings) {
	  	$('.bxslideshow', context).once('bxslideshow', function() {
		  	$(this).bxSlider({
				auto: true,
  				autoControls: true
			});
		});
	  }
	};
})(jQuery);
