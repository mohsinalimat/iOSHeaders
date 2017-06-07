//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSAImportController.h>

#import <iWorkImport/TSAImportDelegate-Protocol.h>

@class NSError, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface TCAImportController : TSAImportController <TSAImportDelegate>
{
    NSString *_passphrase;
    NSError *_passphraseError;
    NSUUID *_baseUUIDForObjectUUID;
}

- (id)baseUUIDForObjectUUID;
- (void)addWarning:(id)arg1;
- (void)willSaveImportedDocument;
- (void)importControllerDidRunOutOfSpace:(id)arg1;
- (void)finishImportWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)templateInfoWithName:(id)arg1 variantIndex:(unsigned long long)arg2;
- (id)templateInfoWithName:(id)arg1;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)importWithPassphrase:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 documentType:(id)arg2 baseUUIDForObjectUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

