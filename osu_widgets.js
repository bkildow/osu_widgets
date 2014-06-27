(function ($) {
  Drupal.behaviors.osu_widgetsCarouselBehavior = {
    attach: function (context, settings) {
      $('.bxcarousel', context).once('bxcarousel', function () {
        $(this).bxSlider({
          minSlides: 2,
          maxSlides: 5,
          moveSlides: 1,
          slideWidth: 175,
          slideMargin: 36,
          captions: true,
          pager: false
        });
      });
    }
  };

  Drupal.behaviors.osu_widgetsSlideshowBehavior = {
    attach: function (context, settings) {
      $('.bxslideshow', context).once('bxslideshow', function () {
        $(this).bxSlider({
          auto: true,
          controls: false,
          mode: 'fade',
          pause: 7000
        });
      });
    }
  };

  Drupal.behaviors.osu_widgetsSpotlightBehavior = {
    attach: function (context, settings) {
      $('.bxspotlight', context).once('bxspotlight', function () {
        $(this).bxSlider({
          auto: true,
          controls: true,
          mode: 'fade',
          pause: 7000,
          captions: true,
          adaptiveHeight: true
        });
      });
    }
  };
})(jQuery);
