//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class IKAppDocument, MusicJSProfileNativeViewController, NSArray, NSDictionary, NSString;

@protocol MusicJSProfileNativeViewControllerDelegate <NSObject>
- (_Bool)jsProfileNativeViewControllerSupportsRelatedContentDocument:(MusicJSProfileNativeViewController *)arg1;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setSocialHidden:(_Bool)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setFollowerCountText:(NSString *)arg2 followersText:(NSString *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setNumberOfFollowers:(long long)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setAvailableContentFlags:(NSDictionary *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setVisibleSegments:(NSArray *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setSelectedSegmentIdentifier:(NSString *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3 forSegmentIdentifier:(NSString *)arg4;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setReportingInformation:(NSDictionary *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setRelatedContentDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setProfileEntityValueProviderData:(NSDictionary *)arg2;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 setMoreRelatedContentDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 presentShareDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
- (void)jsProfileNativeViewController:(MusicJSProfileNativeViewController *)arg1 presentBiographyEditorDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;
@end

