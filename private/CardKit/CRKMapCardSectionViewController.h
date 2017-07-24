//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CardKit/CRKInteractiveCardSectionViewController.h>

#import <CardKit/SFFeedbackListener-Protocol.h>

@class CRKContainerCardSectionView, NSString, UIView;

@interface CRKMapCardSectionViewController : CRKInteractiveCardSectionViewController <SFFeedbackListener>
{
    _Bool _needsToLoadCardSectionView;
    _Bool _inTrackingRunLoopMode;
    UIView *_mapSectionView;
    struct __CFRunLoopObserver *_mainRunLoopObserverRef;
}

+ (id)cardSectionClasses;
- (void).cxx_destruct;
- (void)didEngageCardSection:(id)arg1;
- (_Bool)_shouldAttemptToSnapshotMapView;
- (id)_mapCardSection;
- (id)_viewSnapshot;
- (void)_updateContentSize;
- (void)_loadCardSectionViewIfNeeded;
- (void)_loadMapCardSectionView;
- (id)_unhandledParameters;
- (void)_loadCardSectionView;
- (void)_snapshotCardSectionView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)_initWithCardSection:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) CRKContainerCardSectionView *view; // @dynamic view;

@end

