//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQPProcessor.h>

__attribute__((visibility("hidden")))
@interface GQPSLProcessor : GQPProcessor
{
    Class mGenerator;
}

- (Class)generator;
- (_Bool)go;
- (void)pushInitialState;
- (id)initWithURL:(struct __CFURL *)arg1 zipArchive:(id)arg2 indexFileName:(id)arg3 outputType:(int)arg4 outputPath:(struct __CFString *)arg5 previewRequest:(struct __QLPreviewRequest *)arg6 progressiveHelper:(id)arg7 generator:(Class)arg8 cryptoKey:(id)arg9;
- (id)initWithURL:(struct __CFURL *)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString *)arg4 previewRequest:(struct __QLPreviewRequest *)arg5 progressiveHelper:(id)arg6 generator:(Class)arg7 zipArchive:(id)arg8 cryptoKey:(id)arg9;

@end

