<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Keyimage'),
  'description' => t(''),
  'category' => t('Node'),
  'defaults' => array(),
	'required context' => new ctools_context_required(t('Node'), 'node'),
);

function keyimage_keyimage_content_type_render($subtype, $conf, $panel_args, $context) {
  $node = $context->data;
  $block = new stdClass();
  $block->module = 'keyimage';
  $block->title = ''; 
  $block->content = keyimage_get_keyimage($node,'node',$node->type);
  return $block;
}

/**
 * Display the administrative title for a panel pane in the drag & drop UI
 */
function keyimage_keyimage_content_type_admin_title($subtype, $conf, $context) {
  return t('Keyimage');
}

function keyimage_keyimage_content_type_edit_form($form, &$form_state) {

  /*$form['field'] = mytime_utilities_field_select('Field','Select the field to display',$form_state['conf']['field']);

  $form['use_parent'] = array(
    '#type' => 'checkbox',
    '#title' => 'Always use parent field',
    '#description' => 'If checked, any field on the node itself will be ignored if it has a parent node with this field.',
    '#default_value'=>$form_state['conf']['use_parent'],
    );

  $form['use_both'] = array(
    '#type' => 'checkbox',
    '#title' => 'Use both fields',
    '#description' => "If checked, the parent field will be displayed followed by the node field. This is overridden by the above 'Always use parent field' setting",
    '#default_value'=>$form_state['conf']['use_both'],
    );*/

  return $form;
}

function keyimage_keyimage_content_type_edit_form_submit(&$form, &$form_state) {

 /*$form_state['conf']['field'] = $form_state['values']['field'];
  $form_state['conf']['use_parent'] = $form_state['values']['use_parent'];
  $form_state['conf']['use_both'] = $form_state['values']['use_both'];*/

}
