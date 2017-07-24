//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSupportUI/_NUIBoxArrangementContainer-Protocol.h>

@class NSString;
@protocol NUIArrangementContainer, NUIBoxArrangementDataSource;

@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer>
{
    struct _NUIBoxArrangement _arrangement;
    id <NUIArrangementContainer> _container;
    id <NUIBoxArrangementDataSource> _dataSource;
    double _scale;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (void)positionItemsInBounds:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)_cacheDisplayScaleIfNeeded;
- (struct CGSize)layoutSizeFittingSize:(struct CGSize)arg1;
- (_Bool)supportsAsynchronousMeasurement;
- (void)populateBoxArrangementCells:(vector_0b89710d *)arg1;
- (void)reloadData;
@property(nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property(readonly, nonatomic) __weak id <NUIBoxArrangementDataSource> dataSource;
@property(readonly, nonatomic) __weak id <NUIArrangementContainer> container;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

