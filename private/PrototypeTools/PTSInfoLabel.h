//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSString, _UISettings;

@interface PTSInfoLabel : UILabel <PTSHUDControl, _UISettingsKeyPathObserver>
{
    int _alignment;
    _UISettings *_settings;
    NSString *_valueKeyPath;
}

+ (id)infoLabelForSettings:(id)arg1 valueKeyPath:(id)arg2;
+ (id)infoLabel;
+ (struct CGRect)defaultFrame;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property(nonatomic) __weak _UISettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

