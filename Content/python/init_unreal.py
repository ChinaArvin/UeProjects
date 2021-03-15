# -*- coding:utf-8 -*-
import unreal


def real_run():

    components = unreal.EditorLevelLibrary.get_all_level_actors_components()
    component = [component for component in components if
                 isinstance(component, unreal.FoliageInstancedStaticMeshComponent)][0]

    # selectFoliageInstances = unreal.MyFunction.get_selected_instances(component.get_attach_parent())
    selectFoliageInstances = unreal.SelectInstance.get_selected_instances(component.get_attach_parent())
    staticMeshs = [selectFoliageInstance.get_editor_property("mesh") for selectFoliageInstance in selectFoliageInstances]

    if staticMeshs:
        unreal.AssetToolsHelpers.get_asset_tools().open_editor_for_assets(staticMeshs)
    else:
        raise LookupError("未选择物体", staticMeshs)


def main():
    print("Creating Menus!")
    menus = unreal.ToolMenus.get()
    main_menu = menus.find_menu("LevelEditor.MainMenu")
    if not main_menu:
        print("Failed to find the 'Main' menu. Something is wrong in the force!")

    entry = unreal.ToolMenuEntry(
                                name="Python.Tools",
                                type=unreal.MultiBlockType.MENU_ENTRY,
                                insert_position=unreal.ToolMenuInsert("", unreal.ToolMenuInsertType.FIRST)
    )
    entry.set_label("Select Foliage Instance")

    entry.set_string_command(unreal.ToolMenuStringCommandType.PYTHON, "pytype", string="real_run()")

    script_menu = main_menu.add_sub_menu(main_menu.get_name(), "PythonTools", "Tools", "PyTools")

    script_menu.add_menu_entry("Scripts", entry)

    menus.refresh_all_widgets()

main()