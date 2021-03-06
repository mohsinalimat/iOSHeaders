//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSArray, PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController : PSListController
{
    PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;
    PSSpecifier *_filesystemMetadataSnapshotSpecifier;
    NSArray *_appActivitySpecifiers;
    NSArray *_iCloudSpecifiers;
    PSSpecifier *_spinnerSpecifier;
    NSArray *_healthDataSpecifiers;
    NSArray *_wheelchairDataSpecifiers;
}

+ (_Bool)isProblemReportingEnabled;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (id)shouldShareAppActivityWithAppDevelopers;
- (id)specifiers;
- (void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareWheelchairDataForSpecifier:(id)arg1;
@property(readonly) NSArray *wheelchairDataSpecifiers; // @synthesize wheelchairDataSpecifiers=_wheelchairDataSpecifiers;
- (void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2;
- (id)shouldShareHealthDataForSpecifier:(id)arg1;
@property(readonly) NSArray *healthDataSpecifiers; // @synthesize healthDataSpecifiers=_healthDataSpecifiers;
- (id)iCloudSpecifiers;
- (void)setShouldShareiCloudAnalytics:(id)arg1 specifier:(id)arg2;
- (id)shouldShareiCloudAnalytics:(id)arg1;
@property(readonly) NSArray *appActivitySpecifiers;
@property(readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property(readonly) PSSpecifier *spinnerSpecifier;
- (void)snapshot:(id)arg1;
- (void)setProblemReportingEnabled:(_Bool)arg1;
- (void)setProblemReportingEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)problemReportingEnabled:(id)arg1;
- (void)updateiCloudAnalyticsForSpecifierID:(id)arg1;
- (void)setBoolValue:(_Bool)arg1 forIdMSConfigKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAboutWheelchairDataSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutiCloudAnalyticsSheet;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutDiagnosticsSheet;
- (void)dismissAboutSheet:(id)arg1;
- (void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2;
- (void)launchDiagnosticsSession:(id)arg1;
- (void)checkDiagnosticsSessionAvailability;

@end

