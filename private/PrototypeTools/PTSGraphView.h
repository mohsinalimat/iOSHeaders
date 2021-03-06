//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PT2DGraphView.h>

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSString, _UISettings, _UISettingsGroup;

@interface PTSGraphView : PT2DGraphView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    int _alignment;
    _UISettings *_settings;
    _UISettingsGroup *_settingsGroup;
    NSString *_xAxisValueKeyPath;
    NSString *_yAxisValueKeyPath;
    NSString *_valueKeyPath;
}

+ (id)graphView;
+ (struct CGRect)defaultFrame;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property(copy, nonatomic) NSString *yAxisValueKeyPath; // @synthesize yAxisValueKeyPath=_yAxisValueKeyPath;
@property(copy, nonatomic) NSString *xAxisValueKeyPath; // @synthesize xAxisValueKeyPath=_xAxisValueKeyPath;
@property(nonatomic) __weak _UISettingsGroup *settingsGroup; // @synthesize settingsGroup=_settingsGroup;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)updateGraphData;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

