//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/EFHelper-Protocol.h>

@class ECMappingContext, EDWorkbook, EDWorksheet, NSString;

__attribute__((visibility("hidden")))
@interface EDFormulaHelper : NSObject <EFHelper>
{
    EDWorkbook *mWorkbook;
    EDWorksheet *mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext *mMappingContext;
}

- (int)columnNumber;
- (int)rowNumber;
- (id)workbook;
- (int)resolveFunctionName:(id)arg1;
- (_Bool)isCurrentSheet:(id)arg1;
- (unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
- (unsigned long long)resolveTableToSheetId:(id)arg1;
- (id)resolveTable:(id)arg1;
- (unsigned long long)resolveFile:(id)arg1;
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (unsigned long long)resolveSheet:(id)arg1;
- (unsigned long long)resolveName:(id)arg1;
- (void)dealloc;
- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;
- (unsigned long long)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

