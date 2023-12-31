// SPDX-FileCopyrightText: 2021 - 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include <DSettings>

/*!
 * \brief global_setting_template_manully_trans
 * if there is any sentence that cannot be generated by dtksettings, write it here
 * to make sure it can be translated
 *
 * for now, option like:
 *
 *  "items": {
 *      "values": ["a"],
 *      "keys": ["a"]
 *  }
 *
 *  the writtings in items.values cannot be generated automatically
 */

void global_setting_template_manully_trans()
{
    auto base_default_view_icon_modeValue1 = QObject::tr("Icon");
    auto base_default_view_icon_modeValue2 = QObject::tr("List");

    auto base_new_tab_windows_new_tab_pathValue1 = QObject::tr("Current Directory");
    auto turning_on_the_thumbnail_preview_may_cause_the_remote_directory_to_load_slowly_or_the_operation_to_freeze =
            QObject::tr("Turning on the thumbnail preview may cause the remote directory to load slowly or the operation to freeze");
    auto switching_the_entry_display_may_lead_to_failed_mounting = QObject::tr("Switching the entry display may lead to failed mounting");

    Q_UNUSED(base_default_view_icon_modeValue1);
    Q_UNUSED(base_default_view_icon_modeValue2);
    Q_UNUSED(base_new_tab_windows_new_tab_pathValue1);
    Q_UNUSED(switching_the_entry_display_may_lead_to_failed_mounting);
}
