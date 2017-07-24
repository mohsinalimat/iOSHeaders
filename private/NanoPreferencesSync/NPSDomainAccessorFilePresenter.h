//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPreferencesSync/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSSet, NSString, NSURL;
@protocol NPSDomainAccessorFilePresenterDelegate, OS_dispatch_queue;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter>
{
    _Bool _current;
    NSURL *_domainURL;
    id <NPSDomainAccessorFilePresenterDelegate> _delegate;
    NSOperationQueue *_presenterOperationQueue;
    NSObject<OS_dispatch_queue> *_presenterUnderlyingQueue;
}

@property(nonatomic, getter=isCurrent) _Bool current; // @synthesize current=_current;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *presenterUnderlyingQueue; // @synthesize presenterUnderlyingQueue=_presenterUnderlyingQueue;
@property(retain, nonatomic) NSOperationQueue *presenterOperationQueue; // @synthesize presenterOperationQueue=_presenterOperationQueue;
@property(readonly, nonatomic) __weak id <NPSDomainAccessorFilePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
- (void).cxx_destruct;
- (_Bool)presentedItemNeedsWatching;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)synchronizeForReadingOnly:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 domainURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

