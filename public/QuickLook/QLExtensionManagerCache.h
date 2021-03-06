//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface QLExtensionManagerCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessMatchingExtensionsQueue;
    NSObject<OS_dispatch_queue> *_waitForExtensionListQueue;
    NSObject<OS_dispatch_semaphore> *_waitForExtensionsSemaphore;
    _Bool _isMatchingExtensions;
    NSDictionary *_matchingAttributes;
    id _matchingContext;
    NSMutableDictionary *_matchingExtensions;
    NSMutableArray *_loadedNonUIExtensions;
    NSMutableArray *_loadedUIExtensions;
}

@property(retain, nonatomic) NSMutableArray *loadedUIExtensions; // @synthesize loadedUIExtensions=_loadedUIExtensions;
@property(retain, nonatomic) NSMutableArray *loadedNonUIExtensions; // @synthesize loadedNonUIExtensions=_loadedNonUIExtensions;
@property(retain, nonatomic) NSMutableDictionary *matchingExtensions; // @synthesize matchingExtensions=_matchingExtensions;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property(retain, nonatomic) NSDictionary *matchingAttributes; // @synthesize matchingAttributes=_matchingAttributes;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_synchronouslyWaitForExtensionListIfNeeded;
- (id)extensionWithMatchingAttributes:(id)arg1 extensionPath:(id)arg2;
- (_Bool)hasExtensionWithMatchingAttributes:(id)arg1;
- (void)_didReceiveNewMatchingExtensionList:(id)arg1;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensions;
- (id)initWithMatchingAttributes:(id)arg1;

@end

