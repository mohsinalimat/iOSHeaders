//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebBookmarks/WebBookmark.h>

@class UIColor, UIImage;

@interface WebBookmark (SafariServicesExtras)
+ (void)_sf_webBookmarksFromDropSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)_sf_canCreateWebBookmarksFromDropSession:(id)arg1;
@property(readonly, nonatomic) UIImage *_sf_icon;
@property(retain, nonatomic, setter=_sf_setIconKeyColor:) UIColor *_sf_iconKeyColor;
@end

