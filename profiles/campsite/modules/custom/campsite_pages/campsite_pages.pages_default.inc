<?php
/**
 * @file
 * campsite_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function campsite_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'Front page';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel_context_db2a734c-dd72-4042-a1fc-02050ad4a523';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Supporting partners',
        'keyword' => 'taxonomy_term',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '80',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '28a2b090-df9c-47f3-8bf9-7bc81192552e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_page__panel_context_db2a734c-dd72-4042-a1fc-02050ad4a523';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3382765b-0b4f-4d77-ba79-5e74182aae1e';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3382765b-0b4f-4d77-ba79-5e74182aae1e';
  $display->content['new-3382765b-0b4f-4d77-ba79-5e74182aae1e'] = $pane;
  $display->panels['middle'][0] = 'new-3382765b-0b4f-4d77-ba79-5e74182aae1e';
  $pane = new stdClass();
  $pane->pid = 'new-1ff4b115-e8f3-4479-891d-1c4a2f81fb95';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_list-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'bg-gray',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1ff4b115-e8f3-4479-891d-1c4a2f81fb95';
  $display->content['new-1ff4b115-e8f3-4479-891d-1c4a2f81fb95'] = $pane;
  $display->panels['middle'][1] = 'new-1ff4b115-e8f3-4479-891d-1c4a2f81fb95';
  $pane = new stdClass();
  $pane->pid = 'new-abb862dd-b419-4579-aa1d-728697313f30';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'abb862dd-b419-4579-aa1d-728697313f30';
  $display->content['new-abb862dd-b419-4579-aa1d-728697313f30'] = $pane;
  $display->panels['middle'][2] = 'new-abb862dd-b419-4579-aa1d-728697313f30';
  $pane = new stdClass();
  $pane->pid = 'new-b9f77780-fc63-4f51-b8fa-d0920c65fc9f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Sign up for updates:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-signup',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b9f77780-fc63-4f51-b8fa-d0920c65fc9f';
  $display->content['new-b9f77780-fc63-4f51-b8fa-d0920c65fc9f'] = $pane;
  $display->panels['middle'][3] = 'new-b9f77780-fc63-4f51-b8fa-d0920c65fc9f';
  $pane = new stdClass();
  $pane->pid = 'new-9593ff69-a59a-40e8-a4a4-f651d253534d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'sponsor-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9593ff69-a59a-40e8-a4a4-f651d253534d';
  $display->content['new-9593ff69-a59a-40e8-a4a4-f651d253534d'] = $pane;
  $display->panels['middle'][4] = 'new-9593ff69-a59a-40e8-a4a4-f651d253534d';
  $pane = new stdClass();
  $pane->pid = 'new-00bcd635-5eaa-41c3-9ae8-b8912b8515dc';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'sponsor-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '00bcd635-5eaa-41c3-9ae8-b8912b8515dc';
  $display->content['new-00bcd635-5eaa-41c3-9ae8-b8912b8515dc'] = $pane;
  $display->panels['middle'][5] = 'new-00bcd635-5eaa-41c3-9ae8-b8912b8515dc';
  $pane = new stdClass();
  $pane->pid = 'new-00ec86f5-2c56-462b-9bbe-890435eaee8c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'sponsor-sponsor_argument_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_entity:taxonomy_term_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'gold pane-map',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '00ec86f5-2c56-462b-9bbe-890435eaee8c';
  $display->content['new-00ec86f5-2c56-462b-9bbe-890435eaee8c'] = $pane;
  $display->panels['middle'][6] = 'new-00ec86f5-2c56-462b-9bbe-890435eaee8c';
  $pane = new stdClass();
  $pane->pid = 'new-8bfac0ce-2850-44bb-a309-61ff965ac96d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Map',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-map',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '8bfac0ce-2850-44bb-a309-61ff965ac96d';
  $display->content['new-8bfac0ce-2850-44bb-a309-61ff965ac96d'] = $pane;
  $display->panels['middle'][7] = 'new-8bfac0ce-2850-44bb-a309-61ff965ac96d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
