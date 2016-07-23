(function ($) {
  'use strict';

  Drupal.behaviors.testScript2 = {
    attach: function (context, settings) {
      alert('Hello! Push this button please!');
    }
  };
}(jQuery));