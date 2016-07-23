<?php

function my_render_menu_page(){
  
  $message1 = t('History of K-1 fighters');
  
  $content = array(
    '#theme' => 'my_render_menu_content',
    'message1' => array(
      '#message' => $message1,
      '#theme' => 'my_render_menu_message',
    ),
    '#attached' => array(
      'css' => array(
        drupal_get_path('module','my_render_menu') . "/css/style.css",
      ),
      'js' => array(
        drupal_get_path('module', 'my_render_menu') . '/js/script-1.js',
        drupal_get_path('module', 'my_render_menu') . '/js/script-2.js',
      ),
    ),
    '#attributes' => array(
      'class' => array(
        'my_render_menu_content_wrapper'
      ),
    ),
  );

  return $content;

}

function my_render_menu_history_of_badr_page() {

  $message1 = t('History of Badr Hari');

  $content = array(
    '#theme' => 'my_render_menu_content',
    'message1' => array(
      '#message' => $message1,
      '#theme' => 'my_render_menu_message',
    ),
    '#attached' => array(
      'css' => array(
        drupal_get_path('module','my_render_menu')."/css/style.css",
      ),
    ),
    '#attributes' => array(
      'class' => array(
        'my_render_menu_content_wrapper_1'
      ),
    ),
  );

  return $content;

  //return t("History of Badr Hari");
}

function my_render_menu_history_of_alistar_page() {
  return t("History of Alistar Overim");
}

function my_render_menu_history_of_badr_wins_page(){
  return t("History of wins of Badr Hari");
}

function my_render_menu_history_of_badr_loss_page(){
  return t("History of losses of Badr Hari");
}

function my_render_menu_history_of_alistar_wins_page(){
  return t("History of wins of Alistair Overeem");
}

function my_render_menu_test_item_page() {
  return t("Test item page");
}

function my_render_menu_test_item_1_page(){
  return t("Test tab 1");
}

function my_render_menu_test_item_2_page() {
  return t("Test tab 2");
}

function my_render_menu_test_item_2_2_page(){
  return t("Test tab 2_2");
}

function my_render_menu_test_item_altered_page(){
  return t("This is a altered page");
}

function my_render_menu_test_altered_page(){
  return t("This is a altered page");
}

function me_render_menu_node_of_item($node) {
  return $node->title;
}

function my_render_menu_show_node_item($nid){
  // Load a node

  $node = node_load($nid);

// Establish as a new node

  unset($node->nid);
  $node->is_new = true;

// Save the copy
  node_save($node);

}