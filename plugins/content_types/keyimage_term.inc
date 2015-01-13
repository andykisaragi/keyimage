<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Keyimage'),
  'description' => t(''),
  'category' => t('Taxonomy term'),
  'defaults' => array(),
  'required context' => new ctools_context_required(t('Term'), array('term', 'taxonomy_term'))
);

function keyimage_keyimage_term_content_type_render($subtype, $conf, $panel_args, $context) {
  $page_term = $context->data;
  $block = new stdClass();
  $block->module = 'keyimage';
  $block->title = ''; 

  $keyimage = keyimage_get_keyimage($page_term,'taxonomy_term',$page_term->vocabulary_machine_name);

  $block->content = $keyimage;
  return $block;
}

/**
 * Display the administrative title for a panel pane in the drag & drop UI
 */
function keyimage_keyimage_term_content_type_admin_title($subtype, $conf, $context) {
  return t('Keyimage');
}

function keyimage_keyimage_term_content_type_edit_form($form, &$form_state) {
  return $form;
}

function keyimage_keyimage_term_content_type_edit_form_submit(&$form, &$form_state) {

}
