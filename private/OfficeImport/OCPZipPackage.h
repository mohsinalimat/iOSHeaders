//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCPPackage.h>

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage : OCPPackage
{
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}

- (void)resetPartForLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithArchive:(id)arg1;

@end

