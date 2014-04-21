<?php
/**
 * @file
 * luggage_news_solr.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function luggage_news_solr_field_default_field_instances_alter(&$data) {
  if (isset($data['node-news-field_category'])) {
    $data['node-news-field_category']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-news-field_category']['display']['default']['settings']['path'] = array(
      'search_path' => 'http://preview.ent.iastate.edu/search/content',
    ); /* WAS: '' */
    $data['node-news-field_category']['display']['default']['settings']['target'] = '_self'; /* WAS: '' */
    $data['node-news-field_category']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-news-field_category']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-news-field_category']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    unset($data['node-news-field_category']['display']['full']);
  }
  if (isset($data['node-news-field_tags'])) {
    $data['node-news-field_tags']['display']['default']['label'] = 'hidden'; /* WAS: 'inline' */
    $data['node-news-field_tags']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-news-field_tags']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-news-field_tags']['display']['full']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-news-field_tags']['display']['full']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    $data['node-news-field_tags']['display']['search_index']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-news-field_tags']['display']['search_index']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    unset($data['node-news-field_tags']['display']['default']['settings']);
    unset($data['node-news-field_tags']['display']['search_result']);
  }
}
