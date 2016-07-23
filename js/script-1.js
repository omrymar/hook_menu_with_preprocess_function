(function ($) {
  'use strict';

  Drupal.behaviors.testScript1 = {
    attach: function (context, settings) {
      var $placeholder = $('#my_render_menu_first_name')
        .attr('placeholder');
      console.log($placeholder);
    }
  };
}(jQuery));
