//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPReaderDelegate-Protocol.h>

@class NSString, TSPData, TSPDatabaseReader;

@protocol TSPDatabaseReaderDelegate <TSPReaderDelegate>
- (TSPData *)databaseReader:(TSPDatabaseReader *)arg1 wantsDataForAppRelativePath:(NSString *)arg2 filename:(NSString *)arg3;
- (TSPData *)databaseReader:(TSPDatabaseReader *)arg1 wantsDataForDatabaseObjectIdentifier:(long long)arg2 filename:(NSString *)arg3;
@end

