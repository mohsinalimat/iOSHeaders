//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class UIColor;

@protocol FBSceneHostAppearance <NSObject>
@property(readonly, nonatomic, getter=isContextHosted) _Bool contextHosted;
@property(readonly, nonatomic) double level;
@property(readonly, nonatomic) struct CGRect referenceFrame;
@property(readonly, nonatomic, getter=isHosting) _Bool hosting;
@property(nonatomic) unsigned long long appearanceStyle;
@property(nonatomic) unsigned long long hostedLayerTypes;
@property(retain, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor *backgroundColorWhileHosting;
@property(nonatomic, getter=isClippingDisabled) _Bool clippingDisabled;
@end

