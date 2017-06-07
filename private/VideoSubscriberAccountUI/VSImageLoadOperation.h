//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSItemProvider, VSOptional;

__attribute__((visibility("hidden")))
@interface VSImageLoadOperation : VSAsyncOperation
{
    NSItemProvider *_itemProvider;
    VSOptional *_result;
    struct CGSize _preferredImageSize;
}

@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(readonly, nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(readonly, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithItemProvider:(id)arg1 preferredImageSize:(struct CGSize)arg2;
- (id)init;

@end

