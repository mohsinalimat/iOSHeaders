//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableOrderedSet, NSOrderedSet, NSString, PUActivityViewController;

@interface PUActivityItemSourceController : NSObject
{
    NSMutableOrderedSet *_assetItems;
    NSMutableOrderedSet *_assetItemSources;
    int _taskId;
    PUActivityViewController *_activityViewController;
    CDUnknownBlockType _progressHandler;
    NSArray *__activeItemSources;
    NSError *__error;
    NSString *_activeActivityType;
}

@property(retain) NSString *activeActivityType; // @synthesize activeActivityType=_activeActivityType;
@property(retain, setter=_setError:) NSError *_error; // @synthesize _error=__error;
@property(retain, setter=_setActiveItemSources:) NSArray *_activeItemSources; // @synthesize _activeItemSources=__activeItemSources;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) NSOrderedSet *assetItems; // @synthesize assetItems=_assetItems;
@property(nonatomic) __weak PUActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
- (void).cxx_destruct;
- (id)activityItemSourceForAsset:(id)arg1;
- (void)cancel;
- (void)runExplicitly:(_Bool)arg1 withActivityType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)countOfLoopsToShare;
- (long long)countOfVideosToShare;
- (long long)countOfImagesToShare;
@property(readonly, copy, nonatomic) NSOrderedSet *assets;
- (void)removeAssetItem:(id)arg1;
- (void)addAssetItem:(id)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *assetItemSources;

@end

