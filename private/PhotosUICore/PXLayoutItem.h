//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXLayoutItemInput-Protocol.h>

@class NSString;

@interface PXLayoutItem : NSObject <PXLayoutItemInput>
{
    double _weight;
    struct CGSize _size;
}

@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithSize:(struct CGSize)arg1 weight:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
