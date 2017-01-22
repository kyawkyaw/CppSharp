#pragma once

#include "CppSharp.h"
#include <CppParser.h>

namespace CppSharp
{
    namespace Parser
    {
        enum struct LanguageVersion;
        enum struct ParserDiagnosticLevel;
        enum struct ParserResultKind;
        enum struct SourceLocationKind;
        ref class ClangParser;
        ref class CppParserOptions;
        ref class Parser;
        ref class ParserDiagnostic;
        ref class ParserResult;
        ref class ParserTargetInfo;
        namespace AST
        {
            enum struct CppAbi;
            ref class ASTContext;
            ref class NativeLibrary;
        }
    }
}

namespace CppSharp
{
    namespace Parser
    {
        public enum struct LanguageVersion
        {
            /// <summary> The C programming language. </summary>
            C = 0,
            /// <summary> The C programming language (GNU version). </summary>
            GNUC = 1,
            /// <summary> The C++ programming language year 1998; supports deprecated constructs. </summary>
            CPlusPlus98 = 2,
            /// <summary> The C++ programming language year 1998; supports deprecated constructs (GNU version). </summary>
            GNUPlusPlus98 = 3,
            /// <summary> The C++ programming language year 2011. </summary>
            CPlusPlus11 = 4,
            /// <summary> The C++ programming language year 2011 (GNU version). </summary>
            GNUPlusPlus11 = 5
        };

        public enum struct ParserDiagnosticLevel
        {
            Ignored = 0,
            Note = 1,
            Warning = 2,
            Error = 3,
            Fatal = 4
        };

        public enum struct ParserResultKind
        {
            Success = 0,
            Error = 1,
            FileNotFound = 2
        };

        public enum struct SourceLocationKind
        {
            Invalid = 0,
            Builtin = 1,
            CommandLine = 2,
            System = 3,
            User = 4
        };

        public ref class CppParserOptions : ICppInstance
        {
        public:

            property ::CppSharp::CppParser::CppParserOptions* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            CppParserOptions(::CppSharp::CppParser::CppParserOptions* native);
            static CppParserOptions^ __CreateInstance(::System::IntPtr native);
            CppParserOptions();

            CppParserOptions(CppSharp::Parser::CppParserOptions^ _0);

            ~CppParserOptions();

            property System::Collections::Generic::List<System::String^>^ Arguments
            {
                System::Collections::Generic::List<System::String^>^ get();
                void set(System::Collections::Generic::List<System::String^>^);
            }

            property System::String^ LibraryFile
            {
                System::String^ get();
                void set(System::String^);
            }

            property System::Collections::Generic::List<System::String^>^ SourceFiles
            {
                System::Collections::Generic::List<System::String^>^ get();
                void set(System::Collections::Generic::List<System::String^>^);
            }

            property System::Collections::Generic::List<System::String^>^ IncludeDirs
            {
                System::Collections::Generic::List<System::String^>^ get();
                void set(System::Collections::Generic::List<System::String^>^);
            }

            property System::Collections::Generic::List<System::String^>^ SystemIncludeDirs
            {
                System::Collections::Generic::List<System::String^>^ get();
                void set(System::Collections::Generic::List<System::String^>^);
            }

            property System::Collections::Generic::List<System::String^>^ Defines
            {
                System::Collections::Generic::List<System::String^>^ get();
                void set(System::Collections::Generic::List<System::String^>^);
            }

            property System::Collections::Generic::List<System::String^>^ Undefines
            {
                System::Collections::Generic::List<System::String^>^ get();
                void set(System::Collections::Generic::List<System::String^>^);
            }

            property System::Collections::Generic::List<System::String^>^ LibraryDirs
            {
                System::Collections::Generic::List<System::String^>^ get();
                void set(System::Collections::Generic::List<System::String^>^);
            }

            property CppSharp::Parser::AST::ASTContext^ ASTContext
            {
                CppSharp::Parser::AST::ASTContext^ get();
                void set(CppSharp::Parser::AST::ASTContext^);
            }

            property int ToolSetToUse
            {
                int get();
                void set(int);
            }

            property System::String^ TargetTriple
            {
                System::String^ get();
                void set(System::String^);
            }

            property CppSharp::Parser::AST::CppAbi Abi
            {
                CppSharp::Parser::AST::CppAbi get();
                void set(CppSharp::Parser::AST::CppAbi);
            }

            property bool NoStandardIncludes
            {
                bool get();
                void set(bool);
            }

            property bool NoBuiltinIncludes
            {
                bool get();
                void set(bool);
            }

            property bool MicrosoftMode
            {
                bool get();
                void set(bool);
            }

            property bool Verbose
            {
                bool get();
                void set(bool);
            }

            property CppSharp::Parser::LanguageVersion LanguageVersion
            {
                CppSharp::Parser::LanguageVersion get();
                void set(CppSharp::Parser::LanguageVersion);
            }

            property CppSharp::Parser::ParserTargetInfo^ TargetInfo
            {
                CppSharp::Parser::ParserTargetInfo^ get();
                void set(CppSharp::Parser::ParserTargetInfo^);
            }

            property unsigned int ArgumentsCount
            {
                unsigned int get();
            }

            property unsigned int SourceFilesCount
            {
                unsigned int get();
            }

            property unsigned int IncludeDirsCount
            {
                unsigned int get();
            }

            property unsigned int SystemIncludeDirsCount
            {
                unsigned int get();
            }

            property unsigned int DefinesCount
            {
                unsigned int get();
            }

            property unsigned int UndefinesCount
            {
                unsigned int get();
            }

            property unsigned int LibraryDirsCount
            {
                unsigned int get();
            }

            System::String^ GetArguments(unsigned int i);

            void AddArguments(System::String^ s);

            void ClearArguments();

            System::String^ GetSourceFiles(unsigned int i);

            void AddSourceFiles(System::String^ s);

            void ClearSourceFiles();

            System::String^ GetIncludeDirs(unsigned int i);

            void AddIncludeDirs(System::String^ s);

            void ClearIncludeDirs();

            System::String^ GetSystemIncludeDirs(unsigned int i);

            void AddSystemIncludeDirs(System::String^ s);

            void ClearSystemIncludeDirs();

            System::String^ GetDefines(unsigned int i);

            void AddDefines(System::String^ s);

            void ClearDefines();

            System::String^ GetUndefines(unsigned int i);

            void AddUndefines(System::String^ s);

            void ClearUndefines();

            System::String^ GetLibraryDirs(unsigned int i);

            void AddLibraryDirs(System::String^ s);

            void ClearLibraryDirs();

            protected:
            bool __ownsNativeInstance;
        };

        public ref class ParserDiagnostic : ICppInstance
        {
        public:

            property ::CppSharp::CppParser::ParserDiagnostic* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            ParserDiagnostic(::CppSharp::CppParser::ParserDiagnostic* native);
            static ParserDiagnostic^ __CreateInstance(::System::IntPtr native);
            ParserDiagnostic();

            ParserDiagnostic(CppSharp::Parser::ParserDiagnostic^ _0);

            ~ParserDiagnostic();

            property System::String^ FileName
            {
                System::String^ get();
                void set(System::String^);
            }

            property System::String^ Message
            {
                System::String^ get();
                void set(System::String^);
            }

            property CppSharp::Parser::ParserDiagnosticLevel Level
            {
                CppSharp::Parser::ParserDiagnosticLevel get();
                void set(CppSharp::Parser::ParserDiagnosticLevel);
            }

            property int LineNumber
            {
                int get();
                void set(int);
            }

            property int ColumnNumber
            {
                int get();
                void set(int);
            }

            protected:
            bool __ownsNativeInstance;
        };

        public ref class ParserResult : ICppInstance
        {
        public:

            property ::CppSharp::CppParser::ParserResult* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            ParserResult(::CppSharp::CppParser::ParserResult* native);
            static ParserResult^ __CreateInstance(::System::IntPtr native);
            ParserResult();

            ParserResult(CppSharp::Parser::ParserResult^ _0);

            ~ParserResult();

            property CppSharp::Parser::ParserResultKind Kind
            {
                CppSharp::Parser::ParserResultKind get();
                void set(CppSharp::Parser::ParserResultKind);
            }

            property System::Collections::Generic::List<CppSharp::Parser::ParserDiagnostic^>^ Diagnostics
            {
                System::Collections::Generic::List<CppSharp::Parser::ParserDiagnostic^>^ get();
                void set(System::Collections::Generic::List<CppSharp::Parser::ParserDiagnostic^>^);
            }

            property CppSharp::Parser::AST::ASTContext^ ASTContext
            {
                CppSharp::Parser::AST::ASTContext^ get();
                void set(CppSharp::Parser::AST::ASTContext^);
            }

            property CppSharp::Parser::AST::NativeLibrary^ Library
            {
                CppSharp::Parser::AST::NativeLibrary^ get();
                void set(CppSharp::Parser::AST::NativeLibrary^);
            }

            property unsigned int DiagnosticsCount
            {
                unsigned int get();
            }

            CppSharp::Parser::ParserDiagnostic^ GetDiagnostics(unsigned int i);

            void AddDiagnostics(CppSharp::Parser::ParserDiagnostic^ s);

            void ClearDiagnostics();

            protected:
            bool __ownsNativeInstance;
        };

        public ref class ClangParser : ICppInstance
        {
        public:

            property ::CppSharp::CppParser::ClangParser* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            ClangParser(::CppSharp::CppParser::ClangParser* native);
            static ClangParser^ __CreateInstance(::System::IntPtr native);
            ClangParser();

            ClangParser(CppSharp::Parser::ClangParser^ _0);

            ~ClangParser();

            static CppSharp::Parser::ParserResult^ ParseHeader(CppSharp::Parser::CppParserOptions^ Opts);

            static CppSharp::Parser::ParserResult^ ParseLibrary(CppSharp::Parser::CppParserOptions^ Opts);

            static CppSharp::Parser::ParserTargetInfo^ GetTargetInfo(CppSharp::Parser::CppParserOptions^ Opts);

            protected:
            bool __ownsNativeInstance;
        };
    }
}
