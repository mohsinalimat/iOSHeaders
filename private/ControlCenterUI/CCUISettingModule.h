//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/CCUIButtonModule.h>

@class UIColor;

@interface CCUISettingModule : CCUIButtonModule
{
    _Bool _needsStateUpdateOnNextPresentation;
}

+ (id)statusOffString;
+ (id)statusOnString;
@property(nonatomic) _Bool needsStateUpdateOnNextPresentation; // @synthesize needsStateUpdateOnNextPresentation=_needsStateUpdateOnNextPresentation;
- (_Bool)_isStateOverridden;
@property(readonly, nonatomic) UIColor *selectedStateColor;
- (id)unavailableText;
- (id)statusUpdate;
- (void)warmup;

@end

