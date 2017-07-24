//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class AVAsset, NSData, NSDictionary, NSString, NSURL, TSPData, TSPDataStorageWriteResult, TSPPackage, TSPPackageWriter, TSUColor;
@protocol TSPCryptoInfo, TSPDataArchiver, TSPMutableCryptoInfo;

@protocol TSPDataStorage <NSObject>
@property(readonly, nonatomic) _Bool readOnly;
@property(readonly, nonatomic) unsigned long long encodedLength;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic) _Bool isMissingData;
@property(readonly, nonatomic) _Bool isReadable;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) NSString *packageLocator;
@property(readonly, nonatomic) NSString *documentResourceLocator;
- (void)performIOChannelReadWithAccessor:(void (^)(id <TSUReadChannel>))arg1;
- (_Bool)isInPackage:(TSPPackage *)arg1;
- (NSString *)filenameForPreferredFilename:(NSString *)arg1;
- (TSPDataStorageWriteResult *)writeData:(TSPData *)arg1 toPackageWriter:(TSPPackageWriter *)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(NSString *)arg4;
- (_Bool)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id <TSPDataArchiver>)arg2 packageWriter:(TSPPackageWriter *)arg3;
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 forData:(TSPData *)arg2;
- (NSData *)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGImageSource *)newCGImageSource;
- (struct CGDataProvider *)newCGDataProvider;

@optional
@property(readonly, nonatomic) TSUColor *fallbackColor;
@property(readonly, nonatomic) unsigned int CRC;
@property(readonly, nonatomic) id <TSPCryptoInfo> decryptionInfo;
@property(nonatomic) _Bool gilligan_isRemote;
@property(readonly, nonatomic) _Bool needsDownload;
- (void)performReadOnBookmarkDataSourceURLWithAccessor:(void (^)(NSURL *))arg1;
- (void)addDownloadObserver:(id)arg1 forData:(TSPData *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(id, TSPData *, long long, NSDictionary *))arg4;
- (void)setIsMissingData:(_Bool)arg1;
- (_Bool)linkOrCopyToURL:(NSURL *)arg1 encryptionInfo:(id <TSPMutableCryptoInfo>)arg2 canLink:(_Bool)arg3;
- (id)storageForDataCopyFromOtherContext;
- (void)didInitializeFromDocumentURL:(NSURL *)arg1;
@end

