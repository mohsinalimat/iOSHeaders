//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, UIView;

@protocol PUMutablePhotosGlobalFooterView <NSObject>
@property(nonatomic) _Bool onlyGrowsTaller;
@property(nonatomic) _Bool centerSubviewsVertically;
@property(retain, nonatomic) UIView *accessoryView;
@property(copy, nonatomic) CDUnknownBlockType action;
@property(copy, nonatomic) NSString *actionConfirmationAlertButtonTitle;
@property(copy, nonatomic) NSString *actionConfirmationAlertTitle;
@property(copy, nonatomic) NSString *actionTitle;
@property(nonatomic) double progress;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(copy, nonatomic) NSString *subtitle2;
@property(copy, nonatomic) NSString *subtitle1;
@property(copy, nonatomic) NSString *title;
@end
