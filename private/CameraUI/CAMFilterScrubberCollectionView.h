//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CAMFilterScrubberCollectionView : UICollectionView
{
    NSObject<OS_dispatch_queue> *__mutexQueue;
    NSArray *__mutexQueue_visibleEffectsViews;
}

@property(readonly, nonatomic) NSArray *_mutexQueue_visibleEffectsViews; // @synthesize _mutexQueue_visibleEffectsViews=__mutexQueue_visibleEffectsViews;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // @synthesize _mutexQueue=__mutexQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *threadsafeVisibleEffectsViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

