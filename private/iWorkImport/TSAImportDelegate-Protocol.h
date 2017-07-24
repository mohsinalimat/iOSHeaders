//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSProgress, NSURL, TSAImportController;

@protocol TSAImportDelegate <NSObject>

@optional
- (void)importControllerDidFinishResourceAccess:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 willBeginResourceAccessWithProgress:(NSProgress *)arg2;
- (_Bool)areNewExternalReferencesToDataAllowedForImportController:(TSAImportController *)arg1;
- (void)importController:(TSAImportController *)arg1 documentDidMoveToURL:(NSURL *)arg2;
- (void)importControllerDidRunOutOfSpace:(TSAImportController *)arg1;
- (void)willSaveImportedDocument:(TSAImportController *)arg1;
@end

