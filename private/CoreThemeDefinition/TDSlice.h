//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, TDElementProduction, TDRenditionSpec;

@interface TDSlice : NSManagedObject
{
    struct CGRect _sliceRect;
}

- (void)awakeFromFetch;
@property(nonatomic) struct CGRect sliceRect; // @dynamic sliceRect;
@property(nonatomic) struct CGRect primitiveSliceRect;

// Remaining properties
@property(retain, nonatomic) TDElementProduction *production; // @dynamic production;
@property(retain, nonatomic) TDRenditionSpec *rendition; // @dynamic rendition;
@property(retain, nonatomic) NSString *sliceRectString; // @dynamic sliceRectString;

@end

