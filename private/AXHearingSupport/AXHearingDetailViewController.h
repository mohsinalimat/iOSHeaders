//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class AXRemoteHearingAidDevice;

@interface AXHearingDetailViewController : PSListController
{
    _Bool _isLiveListening;
    AXRemoteHearingAidDevice *_device;
}

@property(retain, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)liveListenToggle:(id)arg1;
- (void)updateLiveListenCell:(id)arg1;
- (void)updateLiveListenWithState:(_Bool)arg1 andLevel:(double)arg2;
- (id)specifierForKey:(id)arg1;
- (void)_reloadProgramSpecifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct _NSRange)programsRange;
- (struct _NSRange)programRangeForPresetId:(id)arg1;
- (void)_updatePrograms:(id)arg1 atLocation:(long long)arg2;
- (void)updateView;
- (void)selectCommonProgramsForLeftAndRightDevices;
- (id)specifiers;
- (id)programSpecsFromAvailablePrograms:(id)arg1 withGroupSpec:(id)arg2 forEar:(int)arg3;
- (id)_combinedProgramSpecifiers;
- (id)_rightProgramSpecifiers;
- (id)_leftProgramSpecifiers;
- (_Bool)shouldShowCombinedStreamingVolume;
- (id)_volumeSpecifiers;
- (id)_programSpecifiers;
- (id)disconnectedSpecifiers;
- (id)deviceSpecifiers;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

