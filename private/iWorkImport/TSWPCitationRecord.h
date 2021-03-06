//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPCitationRecord : TSPObject
{
    NSString *_endNoteXML;
    _Bool _hideAuthorNames;
    _Bool _hideYear;
    NSString *_pageRange;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_authorsString;
    NSString *_title;
    NSString *_year;
    NSString *_type;
    _Bool _shouldRemove;
    _Bool _recordXMLApplied;
}

@property(nonatomic) _Bool recordXMLApplied; // @synthesize recordXMLApplied=_recordXMLApplied;
@property(nonatomic) _Bool shouldRemove; // @synthesize shouldRemove=_shouldRemove;
- (void).cxx_destruct;
- (id)p_endNoteXMLForComparison;
- (void)p_copyPropertiesToObject:(id)arg1;
- (id)description;
- (id)authorYearString;
- (_Bool)isRecordEqual:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *year;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *authorsString;
@property(copy, nonatomic) NSString *suffix;
@property(copy, nonatomic) NSString *prefix;
@property(copy, nonatomic) NSString *pageRange;
@property(nonatomic) _Bool hideYear;
@property(nonatomic) _Bool hideAuthorNames;
@property(copy, nonatomic) NSString *endNoteXML;

@end

