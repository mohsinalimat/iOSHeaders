//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackSection : NSObject
{
    double _sectionHeight;
    long long _firstRowIndex;
    long long _rowCount;
    long long _firstItemRowIndex;
    struct UIEdgeInsets _sectionSpacing;
}

@property(nonatomic) long long firstItemRowIndex; // @synthesize firstItemRowIndex=_firstItemRowIndex;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) long long firstRowIndex; // @synthesize firstRowIndex=_firstRowIndex;
@property(nonatomic) struct UIEdgeInsets sectionSpacing; // @synthesize sectionSpacing=_sectionSpacing;
@property(nonatomic) double sectionHeight; // @synthesize sectionHeight=_sectionHeight;
- (id)debugDescription;

@end

