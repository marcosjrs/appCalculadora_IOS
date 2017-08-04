//
//  Calculadora.h
//  appCalculadora
//
//  Created by Marcos JRS on 3/8/17.
//  Copyright © 2017 Marcos JRS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calculadora : NSObject

@property (strong, nonatomic) NSMutableString * display;
@property double operando1;
@property double memoria;
@property (strong, nonatomic) NSString * operador;
@property BOOL ultimaEntradaEsOperador;

- (NSString *)displayValor;
- (void) inputDigito:(NSString *) digito;
- (void) inputOperador:(NSString *) operador;
- (void) inputIgual;
- (void) inputBorrar;


@end
