//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ICTableAttachmentSelection : NSObject
{
    _Bool _moving;
    _Bool _draggingText;
    unsigned long long _type;
    NSArray *_columns;
    NSArray *_rows;
}

@property(nonatomic) _Bool draggingText; // @synthesize draggingText=_draggingText;
@property(nonatomic) _Bool moving; // @synthesize moving=_moving;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)removeColumns:(id)arg1 rows:(id)arg2;
- (_Bool)removeColumns:(id)arg1 rows:(id)arg2 previousColumns:(id)arg3 previousRows:(id)arg4;
- (void)setSelectionEqualTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)selectCellRangeAtColumns:(id)arg1 rows:(id)arg2;
- (void)selectRows:(id)arg1;
- (void)selectColumns:(id)arg1;
- (void)selectCellAtColumn:(id)arg1 row:(id)arg2;
- (void)unselect;
@property(readonly, nonatomic) _Bool valid;
@property(readonly, nonatomic) _Bool isRangeOrSpanningSelection;
- (id)init;

@end

