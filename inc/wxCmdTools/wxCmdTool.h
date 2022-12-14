/*
     wxCmdTool.h
 */
 
#ifndef _WX_CMD_TOOL_H_
#define _WX_CMD_TOOL_H_

class wxCmdTool
{
	wxDECLARE_NO_COPY_CLASS(wxCmdTool);

	public:

	enum TOOL
	{
		TOOL_UNKNOWN,
		TOOL_MKVMERGE,
		TOOL_MKVPROPEDIT,
		TOOL_FFMPEG,
		TOOL_CMAKE,
		TOOL_FFPROBE,
		TOOL_IMAGE_MAGICK,
		TOOL_MUTOOL,
		TOOL_SUMATRA_PDF
	};
	
	static bool FindExecutable(const wxString&, const wxString&, wxFileName&);
	static bool FindLocalExecutable(const wxString&, const wxString&, wxFileName&);
	static bool FindTool(TOOL, wxFileName&);
	static bool FindLocalTool(TOOL, wxFileName&);

	static void GetSearchDirectories(wxArrayString&);
	static void GetLocalSearchDirectories(wxArrayString&);

	protected:

	static bool CheckExecutable(const wxString&, wxFileName&);
	static bool FindExecutableEnv(const wxString&, const wxString&, const wxString&, wxFileName&);
	static bool FindExecutable(const wxFileName&, const wxString&, const wxString&, wxFileName&);
	static bool FindExecutable(const wxFileName&, const wxString&, const wxArrayString&, wxFileName&);

	private:

	static wxString get_exe_ext();
	static wxFileName get_exe_sub_dir();
	static wxFileName get_exe_local_sub_dir();
	static wxFileName get_exe_file_name(const wxString&);
	static wxFileName get_file_name(const wxString&, const wxString&);
};

#endif