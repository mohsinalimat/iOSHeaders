//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileLookup/MLULookupItemContent.h>

@class DDPreviewAction;

__attribute__((visibility("hidden")))
@interface MLULookupItemDDContent : MLULookupItemContent
{
    DDPreviewAction *_previewAction;
}

- (void).cxx_destruct;
- (void)setupViewControllerInCommitMode;
- (void)dismissViewController;
- (unsigned long long)commitType;
- (id)contact;
- (id)commitURL;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 documentProperties:(id)arg3;

@end

