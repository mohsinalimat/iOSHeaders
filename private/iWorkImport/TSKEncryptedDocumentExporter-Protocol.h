//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKExporter-Protocol.h>

@class NSString;

@protocol TSKEncryptedDocumentExporter <TSKExporter>
- (void)setPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@optional
- (_Bool)validatePassphrases:(id *)arg1;
- (void)setCopyPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
- (void)setPrintPassphrase:(NSString *)arg1 hint:(NSString *)arg2;
@end

