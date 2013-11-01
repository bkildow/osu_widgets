<?php
/**
 * @file
 * osu_widgets.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function osu_widgets_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_osu_carousel_images|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_osu_carousel_images';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_osu_carousel_image',
        1 => 'field_osu_carousel_link',
      ),
    ),
    'fields' => array(
      'field_osu_carousel_image' => 'ds_content',
      'field_osu_carousel_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_osu_carousel_images|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|osu_carousel|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'osu_carousel';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_osu_carousel_images',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_osu_carousel_images' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['fieldable_panels_pane|osu_carousel|default'] = $ds_layout;

  return $export;
}
