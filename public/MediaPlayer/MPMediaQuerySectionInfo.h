//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSMutableCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
    _Bool _hasUnknownSection;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool hasUnknownSection; // @synthesize hasUnknownSection=_hasUnknownSection;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy, nonatomic) NSArray *sectionIndexTitles;

@end

