//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface GLProgram : NSObject
{
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
    _Bool _initialized;
    NSString *_vertexShaderLog;
    NSString *_fragmentShaderLog;
    NSString *_programLog;
}

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (unsigned int)attributeIndex:(id)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 string:(id)arg3;
- (void)dealloc;
@property(copy, nonatomic) NSString *fragmentShaderLog; // @synthesize fragmentShaderLog=_fragmentShaderLog;
- (id)initWithVertexShaderFilename:(id)arg1 fragmentShaderFilename:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderFilename:(id)arg2;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
- (_Bool)link;
@property(copy, nonatomic) NSString *programLog; // @synthesize programLog=_programLog;
@property(copy, nonatomic) NSString *vertexShaderLog; // @synthesize vertexShaderLog=_vertexShaderLog;
- (unsigned int)uniformIndex:(id)arg1;
- (void)use;
- (void)validate;

@end

