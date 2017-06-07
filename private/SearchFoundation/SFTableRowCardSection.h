//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

@class NSArray, NSString, SFTableAlignmentSchema;

@interface SFTableRowCardSection : SFCardSection
{
    _Bool _isSubHeader;
    _Bool _reducedRowHeight;
    _Bool _alignRowsToHeader;
    NSString *_tableIdentifier;
    SFTableAlignmentSchema *_alignmentSchema;
    NSArray *_data;
    NSString *_tabGroupIdentifier;
    long long _verticalAlign;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool alignRowsToHeader; // @synthesize alignRowsToHeader=_alignRowsToHeader;
@property(nonatomic) long long verticalAlign; // @synthesize verticalAlign=_verticalAlign;
@property(nonatomic) _Bool reducedRowHeight; // @synthesize reducedRowHeight=_reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier; // @synthesize tabGroupIdentifier=_tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader; // @synthesize isSubHeader=_isSubHeader;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema; // @synthesize alignmentSchema=_alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier; // @synthesize tableIdentifier=_tableIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

