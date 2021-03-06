//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNAvatarImageRenderer, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewAvatarGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
    CNAvatarImageRenderer *_monogrammer;
}

@property(retain, nonatomic) CNAvatarImageRenderer *monogrammer; // @synthesize monogrammer=_monogrammer;
- (void).cxx_destruct;
- (void)avatarForReview:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)monogramForReviewerName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

